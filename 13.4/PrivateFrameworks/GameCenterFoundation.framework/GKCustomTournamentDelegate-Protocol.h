//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GKPlayer, NSArray;

@protocol GKCustomTournamentDelegate
@property(readonly, nonatomic) GKPlayer *creator;
- (void)declineInvitationWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)acceptInvitationWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)removeCreator:(GKPlayer *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)addCreator:(GKPlayer *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeInvitees:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)addInvitees:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

