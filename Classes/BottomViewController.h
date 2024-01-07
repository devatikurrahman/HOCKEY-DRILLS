//
//  BottomViewController.h
//  IceHocky
//
//  Created by Atikur Rahman on 3/15/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface BottomViewController : UIViewController {

	IBOutlet UIButton *homeBtn;
	IBOutlet UIButton *contentsBtn;
	IBOutlet UIButton *howToUseBtn;
	IBOutlet UIButton *whatShouldKnowBtn;
	IBOutlet UIButton *seasonProgressBtn;
	IBOutlet UIButton *tipsBtn;
	IBOutlet UIButton *creditsBtn;
	
}


@property (nonatomic, retain) IBOutlet UIButton *homeBtn;
@property (nonatomic, retain) IBOutlet UIButton *contentsBtn;
@property (nonatomic, retain) IBOutlet UIButton *howToUseBtn;
@property (nonatomic, retain) IBOutlet UIButton *whatShouldKnowBtn;
@property (nonatomic, retain) IBOutlet UIButton *seasonProgressBtn;
@property (nonatomic, retain) IBOutlet UIButton *tipsBtn;
@property (nonatomic, retain) IBOutlet UIButton *creditsBtn;


-(IBAction) callHomeView;
-(IBAction) callContentsView;
-(IBAction) callHowToUseView;
-(IBAction) callWhatShouldKnowView;
-(IBAction) callSeasonProgressView;
-(IBAction) callAboutUsView;
-(IBAction) callCreditsView;


@end
