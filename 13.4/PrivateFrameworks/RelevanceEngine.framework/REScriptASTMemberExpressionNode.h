//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken;

@interface REScriptASTMemberExpressionNode : REScriptASTNode
{
    REScriptASTNode *_expression;
    REScriptToken *_member;
}

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) REScriptToken *member; // @synthesize member=_member;
@property(readonly, nonatomic) REScriptASTNode *expression; // @synthesize expression=_expression;
- (id)dependencies;
- (id)initWithMember:(id)arg1 expression:(id)arg2;

@end

