// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "SwiftPMDefinitionBugPackage",
    products: [
        .library(name: "SwiftPMDefinitionBugPackage",
                 targets: ["SwiftPMDefinitionBugPackage"])
    ],
    targets: [
        .target(name: "SwiftPMDefinitionBugPackage")
    ]
)
