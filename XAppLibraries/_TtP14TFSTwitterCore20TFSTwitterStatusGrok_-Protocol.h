//
#ifndef _TtP14TFSTwitterCore20TFSTwitterStatusGrok__Protocol_h
#define _TtP14TFSTwitterCore20TFSTwitterStatusGrok__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, TFSTwitterGrokAnnotation, TFSTwitterGrokTranslation;

@protocol TFSTwitterCore.TFSTwitterStatusGrok <NSObject>

@required

@property (readonly, copy, nonatomic) NSArray *grokAnalysisFollowups;
@property (readonly, nonatomic) _Bool grokAnalysisButton;
@property (readonly, nonatomic) TFSTwitterGrokTranslation *grokTranslatedPost;
@property (readonly, nonatomic) TFSTwitterGrokAnnotation *grokAnnotations;

@optional

@end

#endif /* _TtP14TFSTwitterCore20TFSTwitterStatusGrok__Protocol_h */
