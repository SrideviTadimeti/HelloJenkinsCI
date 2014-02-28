//
//  MasterViewController.h
//  HelloJenkinsCI
//
//  Created by Mr. Jenkins on 2/26/14.
//  Copyright (c) 2014 Jenkins. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
