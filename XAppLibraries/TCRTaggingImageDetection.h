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
