//
//  RootViewController.h
//  ERP3
//
//  Created by Morten Jacobsen on 07.10.11.
//  Copyright 2011 no excuse accounting as. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>
#import <MessageUI/MessageUI.h>
#import <QuickLook/QuickLook.h>
#import <CoreData/CoreData.h>

@interface RootViewController : UITableViewController <MFMailComposeViewControllerDelegate, UIActionSheetDelegate,QLPreviewControllerDataSource, NSFetchedResultsControllerDelegate> {
    NSString* pdfFilePath;
    NSString *tekst;
}

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSString* pdfFilePath;
@property (nonatomic, retain) NSString *tekst;

- (IBAction)savePDFFile:(id)sender;

@end
