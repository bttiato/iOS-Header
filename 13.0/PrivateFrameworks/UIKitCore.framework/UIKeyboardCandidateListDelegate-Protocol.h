//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol UIKeyboardCandidateList;

@protocol UIKeyboardCandidateListDelegate <NSObject>

@optional
- (void)candidateListInvalidateSelection:(id <UIKeyboardCandidateList>)arg1;
- (void)candidateListShouldBeDismissed:(id <UIKeyboardCandidateList>)arg1;
- (void)candidateListSelectionDidChange:(id <UIKeyboardCandidateList>)arg1;
- (void)candidateListAcceptCandidate:(id <UIKeyboardCandidateList>)arg1;
- (void)setCandidateList:(id <UIKeyboardCandidateList>)arg1;
@end

