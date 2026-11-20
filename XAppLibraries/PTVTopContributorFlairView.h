//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTopContributorFlairView_h
#define PTVTopContributorFlairView_h
@import Foundation;

#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSString, UIImageView, UIView;

@interface PTVTopContributorFlairView : UIView <PTVWorkClientDelegate> {
    /* instance variables */
    UIImageView *_centerTintStar;
    PTVWorkClient *_workClient;
    long long _participantIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setParticipantIndex:(long long)index;
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (id)context;

@end

#endif /* PTVTopContributorFlairView_h */
