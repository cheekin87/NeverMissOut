//
//  CoreDataTableViewController.h
//  NeverMissOut
//
//  Created by KEN on 7/15/14.
//  Copyright (c) 2014 chee kin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreDataHelper.h"

@interface CoreDataTableViewController : UITableViewController <NSFetchedResultsControllerDelegate>
@property (strong, nonatomic)NSFetchedResultsController *frc;
-(void)performFetch;
@end
