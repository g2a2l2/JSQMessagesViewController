//
//  Created by Jesse Squires
//  http://www.jessesquires.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSQMessagesViewController
//
//
//  GitHub
//  https://github.com/jessesquires/JSQMessagesViewController
//
//
//  License
//  Copyright (c) 2014 Jesse Squires
//  Released under an MIT license: http://opensource.org/licenses/MIT
//

#import "JSQMessagesCollectionViewCell.h"

@protocol JSQMessagesCellOutgoingDelegate <NSObject>

- (void)userPressedMute:(id)sender atCell:(JSQMessagesCollectionViewCell*)cell;

@end

/**
 *  A `JSQMessagesCollectionViewCellOutgoing` object is a concrete instance 
 *  of `JSQMessagesCollectionViewCell` that represents an ou
 tgoing message data item.
 */
@interface JSQMessagesCollectionViewCellOutgoing : JSQMessagesCollectionViewCell
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *mute;
@property (nonatomic,weak) id <JSQMessagesCellOutgoingDelegate> cellDelegte;

@end
