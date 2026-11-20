//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBViewController_h
#define ONBViewController_h
@import Foundation;

#include "OCFAnnounceable-Protocol.h"
#include "OCFWaitable-Protocol.h"
#include "ONBComponentCollectionViewProvider.h"

@class NSString, TFNViewController;

@interface ONBViewController : TFNViewController <OCFAnnounceable, OCFWaitable> {
    /* instance variables */
    _Bool _allowWaitSpinner;
}

@property (retain, nonatomic) ONBComponentCollectionViewProvider *viewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)ocf_voiceoverPresentationAnnouncement;
- (_Bool)canWaitWithMessage:(id)message;
- (void)waitWithMessage:(id)message;
- (void)stopWaiting;

@end

#endif /* ONBViewController_h */
