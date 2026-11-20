//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterStatusContentDisclosureMutation_h
#define TFSTwitterStatusContentDisclosureMutation_h
@import Foundation;

@class NSObject;

@interface TFSTwitterStatusContentDisclosureMutation : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 statusID;
    B24@0:8@"NSString"16 contentDisclosures;
}

/* instance methods */
- (id)initWithStatusID:(long long)id hasPaidPromotionDisclosure:(_Bool)disclosure hasAIGeneratedDisclosure:(_Bool)disclosure aiGeneratedDetectionSource:(long long)source canEditAIGeneratedDisclosure:(_Bool)disclosure;
- (void)assimilateIntoModelContext:(id)context;
- (id)init;

@end

#endif /* TFSTwitterStatusContentDisclosureMutation_h */
