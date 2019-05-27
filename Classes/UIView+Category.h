//
//  PK-ios
//
//  Created by peikua on 15/9/15.
//  Copyright (c) 2015年 peikua. All rights reserved.
//

#import <UIKit/UIKit.h>


struct RadiusEdit {
    BOOL leftTop;
    BOOL rightTop;
    BOOL leftBottom;
    BOOL rightBottom;
};
typedef struct RadiusEdit RadiusEdit;

CG_INLINE RadiusEdit
RadiusEditMake(BOOL leftTop, BOOL rightTop, BOOL leftBottom, BOOL rightBottom)
{
    RadiusEdit radiusEdit;
    radiusEdit.leftTop = leftTop;
    radiusEdit.rightTop = rightTop;
    radiusEdit.leftBottom = leftBottom;
    radiusEdit.rightBottom = rightBottom;
    return radiusEdit;
};



@interface UIView (Category)
//把View加在Window上
- (void) addToWindow;

@end


