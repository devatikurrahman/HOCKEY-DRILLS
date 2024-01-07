//
//  ContentsViewController.h
//  IceHocky
//
//  Created by Atikur Rahman on 3/15/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ApplicationCell.h"


@interface ContentsViewController : UIViewController {

	IBOutlet UITableView * listtable;

	ApplicationCell *tmpCell;

	UILocalizedIndexedCollation *collation;
	
	NSDictionary *data;
	NSMutableArray *sectionsArray;
	NSMutableArray *contentsDataArray;
}

@property (nonatomic, retain) NSMutableArray *contentsDataArray;
@property (nonatomic, retain) NSMutableArray *sectionsArray;

@property (nonatomic, retain) UILocalizedIndexedCollation *collation;
@property (nonatomic, assign) IBOutlet ApplicationCell *tmpCell;
@property (nonatomic, retain) NSDictionary *data;

@end
