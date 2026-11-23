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
