//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVMoreTableViewCell_h
#define PTVMoreTableViewCell_h
@import Foundation;

#include "PTVTruncatedParticipantTableViewCell.h"

@interface PTVMoreTableViewCell : PTVTruncatedParticipantTableViewCell

@property (nonatomic) unsigned long long count;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;

@end

#endif /* PTVMoreTableViewCell_h */
