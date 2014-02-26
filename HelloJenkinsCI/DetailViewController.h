//
//  DetailViewController.h
//  HelloJenkinsCI
//
//  Created by Mr. Jenkins on 2/26/14.
//  Copyright (c) 2014 Jenkins. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
