//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXHearingSupport/NSObject-Protocol.h>

@class TTYUtteranceCell, TUCall;

@protocol TTYUtteranceCellDelegate <NSObject>
- (TUCall *)callContainingUtterance;
- (void)utteranceCellDidUpdateContent:(TTYUtteranceCell *)arg1;
@end

