//
//  QFRootViewController.m
//  QFTableViewMenu
//
//  Created by Mr.Yao on 15/12/13.
//  Copyright © 2015年 Mr.Yao. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "WXApiObject.h"
@protocol ViewControllerDelegate <NSObject>

-(void)pay;

@end


@interface ViewController : UIViewController

@property (nonatomic ,assign)id<ViewControllerDelegate>delegate;


@end

