//
//  SeasonProgressViewController.h
//  IceHocky
//
//  Created by Atikur Rahman on 3/16/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyScrollDetailView.h"


@interface SeasonProgressViewController : UIViewController<UIScrollViewDelegate> {

	IBOutlet UIImageView *seasion_progress_img;
	
	MyScrollDetailView *scrollview1;
	UIImageView *image1;
}


@property (nonatomic, retain) UIImageView *image1;

-(IBAction) goBack;


@end
