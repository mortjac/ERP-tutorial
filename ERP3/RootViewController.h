//
//  RootViewController.h
//  ERP3
//
//  Created by Morten Jacobsen on 07.10.11.
//  Copyright 2011 no excuse accounting as. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface RootViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@end
