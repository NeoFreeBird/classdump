//
#ifndef GADAdUnitInheritancePattern_h
#define GADAdUnitInheritancePattern_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface GADAdUnitInheritancePattern : NSObject {
    /* instance variables */
    NSArray *_inclusionPatterns;
    NSArray *_exclusionPatterns;
}

@property (readonly, nonatomic) NSString *adUnitID;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (_Bool)isAncestorOfAdUnitID:(id)id;

@end

#endif /* GADAdUnitInheritancePattern_h */
