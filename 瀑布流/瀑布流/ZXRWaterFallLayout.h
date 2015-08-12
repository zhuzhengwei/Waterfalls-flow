//
//  ZXRWaterFallLayout.h
//  瀑布流
//
//  Created by zuo on 15/8/7.
//  Copyright (c) 2015年 zuo. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZXRWaterFallLayout;

// 代理协议
@protocol ZXRWaterFallLayoutDelegate <NSObject>
// 必须实现
@required
- (CGFloat)waterflowLayout:(ZXRWaterFallLayout *)waterflowLayout heightForItemAtIndex:(NSUInteger)index itemWidth:(CGFloat)itemWidth;
// 可选实现
@optional
- (CGFloat)columnCountInWaterflowLayout:(ZXRWaterFallLayout *)waterflowLayout;
- (CGFloat)columnMarginInWaterflowLayout:(ZXRWaterFallLayout *)waterflowLayout;
- (CGFloat)rowMarginInWaterflowLayout:(ZXRWaterFallLayout *)waterflowLayout;
- (UIEdgeInsets)edgeInsetsInWaterflowLayout:(ZXRWaterFallLayout *)waterflowLayout;
@end

@interface ZXRWaterFallLayout : UICollectionViewLayout
/** 代理 */
@property (nonatomic, weak) id<ZXRWaterFallLayoutDelegate> delegate;
@end