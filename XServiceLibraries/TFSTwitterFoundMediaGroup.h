//
#ifndef TFSTwitterFoundMediaGroup_h
#define TFSTwitterFoundMediaGroup_h
@import Foundation;

#include "TFSTwitterFoundMediaObject.h"

@class NSString;

@interface TFSTwitterFoundMediaGroup : TFSTwitterFoundMediaObject

@property (readonly, copy, nonatomic) NSString *displayName;

/* instance methods */
- (id)initWithIdentifier:(id)identifier primaryImage:(id)image altText:(id)text parentGroup:(id)group;
- (id)initWithIdentifier:(id)identifier displayName:(id)name primaryImage:(id)image parentGroup:(id)group;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)initWithJSONDictionary:(id)jsondictionary parentGroup:(id)group;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSTwitterFoundMediaGroup_h */
