

#ifdef HAVE_GOOGLE_MAPS

#import <GoogleMaps/GoogleMaps.h>
#import <React/UIView+React.h>

@class AIRGoogleMapMarker;

@interface AIRGMSMarker : GMSMarker
@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, weak) AIRGoogleMapMarker *fakeMarker;
@property (nonatomic, copy) RCTBubblingEventBlock onPress;
@end


@protocol AIRGMSMarkerDelegate <NSObject>
@required
-(void)didTapMarker;
@end

#endif
