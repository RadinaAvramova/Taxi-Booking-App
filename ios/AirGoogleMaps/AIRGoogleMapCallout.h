

#ifdef HAVE_GOOGLE_MAPS

#import <UIKit/UIKit.h>
#import <React/RCTView.h>

@interface AIRGoogleMapCallout : UIView
@property (nonatomic, assign) BOOL tooltip;
@property (nonatomic, copy) RCTBubblingEventBlock onPress;
@property (nonatomic, assign) BOOL alphaHitTest;

- (BOOL) isPointInside:(CGPoint)pointInCallout;

@end

#endif
