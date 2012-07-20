//
//  FaceView.h
//  Happiness
//
//  Created by Hugo Ferreira on 2012/07/19.
//  Copyright (c) 2012 Mindclick. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FaceView : UIView

@property (nonatomic) CGFloat scale;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;

@end
