//
//  ERP3AppDelegate.h
//  ERP3
//
//  Created by Morten Jacobsen on 07.10.11.
//  Copyright 2011 no excuse accounting as. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ERP3AppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end
