//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef WatermarkConfigurable_Protocol_h
#define WatermarkConfigurable_Protocol_h
@import Foundation;

@protocol WatermarkConfigurable

@required

@property (nonatomic) _Bool logoHidden;
@property (nonatomic) _Bool stickerLabelHidden;

@optional

@end

#endif /* WatermarkConfigurable_Protocol_h */
