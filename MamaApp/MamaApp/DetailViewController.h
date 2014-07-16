//
//  DetailViewController.h
//  MamaApp
//
//  Created by 朱京辉 on 14-7-16.
//  Copyright (c) 2014年 ___Zhu_Jinghui___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
