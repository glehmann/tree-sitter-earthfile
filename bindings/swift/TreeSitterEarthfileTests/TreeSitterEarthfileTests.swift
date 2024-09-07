import XCTest
import SwiftTreeSitter
import TreeSitterEarthfile

final class TreeSitterEarthfileTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_earthfile())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Earthfile grammar")
    }
}
