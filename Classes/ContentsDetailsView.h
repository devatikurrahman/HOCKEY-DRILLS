//
//  ContentsDetailsView.h
//  IceHocky
//
//  Created by Atikur Rahman on 3/16/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyScrollDetailView.h"


@interface ContentsDetailsView : UIViewController<UIScrollViewDelegate> {

	IBOutlet UIImageView *large_img;
	IBOutlet UILabel *currentLable;
	IBOutlet UILabel *drillNameLabel;
	IBOutlet UILabel *drillNoLabel;
	
	NSDictionary *contentsDetailDic;
	
	NSInteger totalPractise;
	NSInteger currentPractise;
	
	NSInteger totalImage;
	NSInteger currentImage;
	
	MyScrollDetailView *scrollview1;
	//UIScrollView *scrollview2;
	UIImageView *image1;
	UIImageView *image2;
	
	//UIScrollView *scrollView;
	UIView *clipView;
	
	IBOutlet UIButton *details_left_btn;
	IBOutlet UIButton *details_right_btn;
	
	IBOutlet UIButton *drillDescriptionBtn;
	IBOutlet UIButton *keyDevelopmentBtn;
	
	NSString *drill_criteria;
	
}

@property (nonatomic, retain) NSDictionary *contentsDetailDic;

-(IBAction) goBack;
-(IBAction) goRightPractise;
-(IBAction) goLeftPractise;
-(IBAction) goRightImage;
-(IBAction) goLeftImage;
-(IBAction) drillDescription;
-(IBAction) keyDevelopment;

@property (nonatomic) NSInteger totalPractise;
@property (nonatomic) NSInteger currentPractise;
@property (nonatomic) NSInteger totalImage;
@property (nonatomic) NSInteger currentImage;
//-(IBAction) changeSection;
//-(IBAction) changeImage;

@property (nonatomic, retain) UIImageView *image1;
@property (nonatomic, retain) UIImageView *image2;

@property (nonatomic, retain)  UIScrollView *scrollview1;

@property (nonatomic, retain) IBOutlet UIView *clipView;

@end
