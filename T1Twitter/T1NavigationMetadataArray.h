//
#ifndef T1NavigationMetadataArray_h
#define T1NavigationMetadataArray_h
@import Foundation;

#include "TFSTwitterScribeParameters-Protocol.h"

@class NSArray, NSObject, NSString;

@interface T1NavigationMetadataArray : NSObject <TFSTwitterScribeParameters>

@property (readonly, nonatomic) NSArray *navigationMetadataArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithArray:(id)array;
- (id)JSONDictionary;

@end

#endif /* T1NavigationMetadataArray_h */
