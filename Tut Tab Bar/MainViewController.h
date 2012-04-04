//
//  MainViewController.h
//  Tut Tab Bar
//
//  Created by Real Tutorials on 3/19/12.
//  Copyright (c) 2012 TechnicalUI & RealTuty. All rights reserved.
//

#import "FlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)showInfo:(id)sender;

@end
