//
//  ContentsSubViewController.h
//  IceHocky
//
//  Created by Atikur Rahman on 3/16/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ApplicationCell.h"


@interface ContentsSubViewController : UIViewController {

	IBOutlet UITableView * listtable;
	
	ApplicationCell *tmpCell;
	
	UILocalizedIndexedCollation *collation;
	
	NSDictionary *data;
	NSMutableArray *sectionsArray;
	NSMutableArray *contentsSubItemArray;
	
	
	IBOutlet UIButton *backBtn;
	int selectedContent;
	
	IBOutlet UILabel *topTitle;
	
}

@property (nonatomic, retain) NSMutableArray *contentsSubItemArray;
@property (nonatomic, retain) NSMutableArray *sectionsArray;

@property (nonatomic, retain) UILocalizedIndexedCollation *collation;
@property (nonatomic, assign) IBOutlet ApplicationCell *tmpCell;
@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) IBOutlet UILabel *topTitle;

-(IBAction) goBack;

@end
