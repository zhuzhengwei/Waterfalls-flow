//
//  ZXRShopCell.m
//  瀑布流
//
//  Created by zuo on 15/8/12.
//  Copyright (c) 2015年 zuo. All rights reserved.
//

#import "ZXRShopCell.h"
#import "ZXRShop.h"
#import "UIImageView+WebCache.h"

@interface ZXRShopCell()
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;
@end

@implementation ZXRShopCell

- (void)setShop:(ZXRShop *)shop
{
    _shop = shop;
    
    // 1.图片
    [self.imageView sd_setImageWithURL:[NSURL URLWithString:shop.img] placeholderImage:[UIImage imageNamed:@"loading"]];
    
    // 2.价格
    self.priceLabel.text = shop.price;
}
@end
