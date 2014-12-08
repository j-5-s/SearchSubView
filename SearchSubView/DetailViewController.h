//
//  DetailViewController.h
//  SearchSubView
//
//  Created by James Charlesworth on 12/7/14.
//  Copyright (c) 2014 jhc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

