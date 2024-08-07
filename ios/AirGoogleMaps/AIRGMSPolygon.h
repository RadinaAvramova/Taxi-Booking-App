

#ifdef HAVE_GOOGLE_MAPS

#import <GoogleMaps/GoogleMaps.h>
#import <React/UIView+React.h>

@class AIRGoogleMapPolygon;

@interface AIRGMSPolygon : GMSPolygon
@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, copy) RCTBubblingEventBlock onPress;
@end

#endif
