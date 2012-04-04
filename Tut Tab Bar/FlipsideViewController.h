//
//  FlipsideViewController.h
//  Tut Tab Bar
//
//  Created by Real Tutorials on 3/19/12.
//  Copyright (c) 2012 TechnicalUI & RealTuty. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
