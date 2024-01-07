//
//  HockeyGoalieDrillsAppDelegate.h
//  HockeyGoalieDrills
//
//  Created by Atikur Rahman on 11/1/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HomeViewController.h"
#import "BottomViewController.h"


@interface HockeyGoalieDrillsAppDelegate : NSObject <UIApplicationDelegate> {
    
	UIWindow *window;
	
	HomeViewController *hvc;
	BottomViewController *bvc;
	
	UINavigationController *homeNavigationController;
	UINavigationController *contentsNavigationController;
	UINavigationController *howToUseNavigationController;
	UINavigationController *whatShouldKnowNavigationController;
	UINavigationController *seasionProgressNavigationController;
	UINavigationController *aboutUsNavigationController;
	UINavigationController *creditsNavigationController;
	
	UINavigationController *currentNavigationController;
	
	NSString *contentsItem;
	
	NSString *currentItem;
	
	NSInteger selectedItem;
	NSInteger selectedContent;
	NSInteger selectedPractise;
	
	NSDictionary *itemDictionary;
	
	UIInterfaceOrientation deviceOrientation;
	int first_run;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) BottomViewController *bvc;
@property (nonatomic, retain) HomeViewController *hvc;

@property (nonatomic, retain) UINavigationController *homeNavigationController;
@property (nonatomic, retain) UINavigationController *contentsNavigationController;
@property (nonatomic, retain) UINavigationController *howToUseNavigationController;
@property (nonatomic, retain) UINavigationController *whatShouldKnowNavigationController;
@property (nonatomic, retain) UINavigationController *seasionProgressNavigationController;
@property (nonatomic, retain) UINavigationController *aboutUsNavigationController;
@property (nonatomic, retain) UINavigationController *creditsNavigationController;

@property (nonatomic, retain) UINavigationController *currentNavigationController;

@property (nonatomic, retain) NSString *contentsItem;
@property (nonatomic, retain) NSString *currentItem;


@property (nonatomic) NSInteger selectedItem;
@property (nonatomic) NSInteger selectedContent;
@property (nonatomic) NSInteger selectedPractise;


@property (nonatomic, retain) NSDictionary *itemDictionary;

@property (nonatomic) UIInterfaceOrientation deviceOrientation;

-(void) receivedRotate: (UIInterfaceOrientation )corientation;


@end

