//
//  MyScrollView.h
//  Vistosi
//
//  Created by roni alam on 11/9/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MyScrollDetailView : UIScrollView{
	
	CGPoint tapLocation; 
	BOOL multipleTouches;        // YES if a touch event contains more than one touch; reset when all fingers are lifted.
    BOOL twoFingerTapIsPossible; // Set to NO when 2-finger tap can be ruled out (e.g. 3rd finger down, fingers touch down too far apart, etc).
	
}

-(void) resetZoomScale:(float) scale;

@end
