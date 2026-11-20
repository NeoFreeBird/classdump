//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRTaggingImageDetection_h
#define TCRTaggingImageDetection_h
@import Foundation;

@class NSObject;

@interface TCRTaggingImageDetection : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 attachmentQueue;
    @40@0:8:16@24@32 attachmentDetectedCache;
}

/* instance methods */
- (void)detectFacesWithAttachments:(id)attachments delegate:(id)delegate;
- (id)init;

@end

#endif /* TCRTaggingImageDetection_h */
