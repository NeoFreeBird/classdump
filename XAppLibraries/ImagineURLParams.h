//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ImagineURLParams_h
#define ImagineURLParams_h
@import Foundation;

@class NSObject, NSString;

@interface ImagineURLParams : NSObject

@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *parentXPostID;
@property (copy, nonatomic) NSString *imaginePostID;
@property (copy, nonatomic) NSString *musicOverlayID;
@property (copy, nonatomic) NSString *captionPreset;
@property (copy, nonatomic) NSString *text;

/* instance methods */

@end

#endif /* ImagineURLParams_h */
