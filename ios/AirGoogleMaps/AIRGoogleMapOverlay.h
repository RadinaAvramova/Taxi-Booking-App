

#ifdef HAVE_GOOGLE_MAPS

#import <Foundation/Foundation.h>
#import <GoogleMaps/GoogleMaps.h>
#import <React/RCTBridge.h>
#import "AIRMapCoordinate.h"
#import "AIRGoogleMap.h"

@interface AIRGoogleMapOverlay : UIView

@property (nonatomic, strong) GMSGroundOverlay *overlay;
@property (nonatomic, copy) NSString *imageSrc;
@property (nonatomic, strong, readonly) UIImage *overlayImage;
@property (nonatomic, copy) NSArray *boundsRect;
@property (nonatomic, assign) CGFloat opacity;
@property (nonatomic, readonly) GMSCoordinateBounds *overlayBounds;

@property (nonatomic, weak) RCTBridge *bridge;

@end

#endif
