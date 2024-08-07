
#import <Google-Maps-iOS-Utils/GMUHeatmapTileLayer.h>

@interface AIRGoogleMapHeatmap : UIView

@property (nonatomic, strong) GMUHeatmapTileLayer *heatmap;
@property (nonatomic, strong) NSMutableArray<GMUWeightedLatLng *> *points;
@property (nonatomic, assign) NSUInteger radius;
@property (nonatomic, assign) float opacity;
@property (nonatomic, assign) GMUGradient *gradient;

@end
