//
//  QFRootViewController.m
//  QFTableViewMenu
//
//  Created by Mr.Yao on 15/12/13.
//  Copyright © 2015年 Mr.Yao. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [self getPayBtn];
}



-(void)getPayBtn{
    UIButton * button = [UIButton buttonWithType:UIButtonTypeContactAdd];
    button.frame = CGRectMake(90, 90, 90, 90);
    [button addTarget:self action:@selector(pay) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:button];
}



#pragma mark - 支付
-(void)pay{
        if (_delegate) {
            [_delegate pay];
        }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
