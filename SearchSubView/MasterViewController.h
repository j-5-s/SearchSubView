//
//  MasterViewController.h
//  SearchSubView
//
//  Created by James Charlesworth on 12/7/14.
//  Copyright (c) 2014 jhc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) IBOutlet UIView *headerView;
@property (nonatomic, strong) UISearchController *searchController;



@end

