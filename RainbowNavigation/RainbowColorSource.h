//
//  RainbowColorSource.h
//  RainbowNavigationSample
//
//  Created by eony on 2016/12/30.
//  Copyright © 2016年 danis. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol RainbowColorSource <NSObject>

@optional
- (UIColor *)navigationBarInColor;

@optional
- (UIColor *)navigationBarOutColor;

@end
