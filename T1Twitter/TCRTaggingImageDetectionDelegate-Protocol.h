//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRTaggingImageDetectionDelegate_Protocol_h
#define TCRTaggingImageDetectionDelegate_Protocol_h
@import Foundation;

@protocol TCRTaggingImageDetectionDelegate

@required

/* required instance methods */
- (void)imageDetectionDidDetectFace:(id)face didDetectFace:(_Bool)face;

@optional

@end

#endif /* TCRTaggingImageDetectionDelegate_Protocol_h */
