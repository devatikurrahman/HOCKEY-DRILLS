//
//  HomeViewController.h
//  IceHocky
//
//  Created by Atikur Rahman on 3/15/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface HomeViewController : UIViewController {

	IBOutlet UIButton *itemOne;
	IBOutlet UIButton *itemTwo;
	IBOutlet UIButton *itemThree;
	
	IBOutlet UIImageView *selectedImgOne;
	IBOutlet UIImageView *selectedImgTwo;
	IBOutlet UIImageView *selectedImgThree;
	
	NSString *currentItem;
	
	NSDictionary *data;
	NSMutableArray *itemDataArray;
	
}

@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) NSMutableArray *itemDataArray;


-(IBAction) selectItemOne:(UIButton *) currentBtn;
-(IBAction) selectItemTwo:(UIButton *) currentBtn;
-(IBAction) selectItemThree:(UIButton *) currentBtn;



@end
