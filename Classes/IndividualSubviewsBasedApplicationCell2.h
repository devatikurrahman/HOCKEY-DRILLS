//
//  IndividualSubviewsBasedApplicationCell2.h
//  Fortuny Fabric Browser 2
//
//  Created by Roni on 4/4/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ApplicationCell.h"
#import "RatingView.h"


@interface IndividualSubviewsBasedApplicationCell2 : ApplicationCell {
	
	IBOutlet UIImageView *iconView;
    IBOutlet UILabel *descriptionlabel;
    IBOutlet UILabel *titlelabel;
    IBOutlet RatingView *ratingView;
	
}

@end
