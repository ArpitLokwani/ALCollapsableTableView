//
//  DetailViewController.h
//  ALCollapsableTableView
//
//  Created by Arpit Lokwani on 5/1/15.
//  Copyright (c) 2015 Arpit Lokwani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

